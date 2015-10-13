import urllib2 as url

req = url.Request(url='https://github.com/users/dastanforever/contributions')

f = url.urlopen(req)

print f.read()
