FROM node:17 as installer
WORKDIR /api
COPY ./api .
RUN yarn set version berry && yarn set version latest
RUN yarn 
RUN yarn build
CMD yarn start:prod

# Bind to all network interfaces so that it can be mapped to the host OS
ENV HOST=0.0.0.0 PORT=3000
EXPOSE 3000