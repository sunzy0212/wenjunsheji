const Koa = require('koa');
var staticServer = require('koa-static');
var path = require('path');
var render = require('koa-ejs');

const app = new Koa();

app.use(staticServer(path.join(__dirname,'public')));

render(app, {
    root: path.join(__dirname, 'public'),
    layout: '__layout',
    viewExt: 'html',
    cache: false,
    debug: true
});

// response
app.use(ctx => {
  ctx.render('index', {layout:false})
});

app.listen(3000);
