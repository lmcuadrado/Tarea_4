import numpy as np
import matplotlib.pyplot as plt
temp_fi1=np.genfromtxt("fija1.txt",delimiter=",",filling_values="2" )
temp_fi2=np.genfromtxt("fija2.txt",delimiter=",",filling_values="2" )
temp_fi3=np.genfromtxt("fija3.txt",delimiter=",",filling_values="2" )
temp_fi4=np.genfromtxt("fija4.txt",delimiter=",",filling_values="2" )

plt.imshow(temp_fi1)
plt.savefig("fija1.jpg")
plt.clf()
plt.imshow(temp_fi2)
plt.savefig("fija2.jpg")
plt.clf()
plt.imshow(temp_fi3)
plt.savefig("fija3.jpg")
plt.clf()
plt.imshow(temp_fi4)
plt.savefig("fija4.jpg")
plt.clf()

temp_ab1=np.genfromtxt("libres1.txt",delimiter=",",filling_values="2" )
temp_ab2=np.genfromtxt("libres2.txt",delimiter=",",filling_values="2" )
temp_ab3=np.genfromtxt("libres3.txt",delimiter=",",filling_values="2" )
temp_ab4=np.genfromtxt("libres4.txt",delimiter=",",filling_values="2" )

plt.imshow(temp_ab1)
plt.savefig("libres1.jpg")
plt.clf()
plt.imshow(temp_ab2)
plt.savefig("libres2.jpg")
plt.clf()
plt.imshow(temp_ab3)
plt.savefig("libres3.jpg")
plt.clf()
plt.imshow(temp_ab4)
plt.savefig("libres4.jpg")
plt.clf()

temp_pe1=np.genfromtxt("periodica1.txt",delimiter=",",filling_values="2" )
temp_pe2=np.genfromtxt("periodica2.txt",delimiter=",",filling_values="2" )
temp_pe3=np.genfromtxt("periodica3.txt",delimiter=",",filling_values="2" )
temp_pe4=np.genfromtxt("periodica4.txt",delimiter=",",filling_values="2" )

plt.imshow(temp_pe1)
plt.savefig("periodica1.jpg")
plt.clf()
plt.imshow(temp_pe2)
plt.savefig("periodica2.jpg")
plt.clf()
plt.imshow(temp_pe3)
plt.savefig("periodica3.jpg")
plt.clf()
plt.imshow(temp_pe4)
plt.savefig("periodica4.jpg")
plt.clf()


v10=np.genfromtxt("10v.txt",delimiter=",",filling_values="2" )
v20=np.genfromtxt("20v.txt",delimiter=",",filling_values="2" )
v30=np.genfromtxt("30v.txt",delimiter=",",filling_values="2" )
v40=np.genfromtxt("40v.txt",delimiter=",",filling_values="2" )
v45=np.genfromtxt("45v.txt",delimiter=",",filling_values="2" )
v50=np.genfromtxt("50v.txt",delimiter=",",filling_values="2" )
v60=np.genfromtxt("60v.txt",delimiter=",",filling_values="2" )
v70=np.genfromtxt("70v.txt",delimiter=",",filling_values="2" )

vx10=v10[:,0]
vx20=v20[:,0]
vx30=v30[:,0]
vx40=v40[:,0]
vx50=v50[:,0]
vx60=v60[:,0]
vx70=v70[:,0]
vx45=v45[:,0]

vy10=v10[:,1]
vy20=v20[:,1]
vy30=v30[:,1]
vy40=v40[:,1]
vy50=v50[:,1]
vy60=v60[:,1]
vy70=v70[:,1]
vy45=v45[:,1]


plt.plot(vx45,vy45)
plt.savefig("45vtw.jpg")
plt.clf()

plt.plot(vx10,vy10)
plt.plot(vx20,vy20)
plt.plot(vx30,vy30)
plt.plot(vx40,vy40)
plt.plot(vx50,vy50)
plt.plot(vx60,vy60)
plt.savefig("totvtw.jpg")
plt.clf()






#plt.imshow(temp_pe1)
#plt.savefig("pe1o.jpg")
#plt.clf()
#plt.imshow(temp_pe2)
#plt.savefig("pe2o.jpg")
#plt.clf()
#plt.imshow(temp_pe3)
#plt.savefig("pe3o.jpg")
#plt.clf()
#plt.imshow(temp_pe4)
#plt.savefig("pe4o.jpg")
#plt.clf()
