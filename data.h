#include <iostream>
#include <string>
using std::string;

string descr[8]={"坤","震","坎","兑","艮","离","巽","乾"};
int binsqa[]={1,2,4,8,16,32,64};

class gua{
private:
	int no[6];
	string name;
public:
	gua(int[],string);
	void print();
};

void gua::print(){
	for(int i=5;i>=0;i--){
		if(no[i]==0)
		  std::cout<<"- -\n";
		else
		  std::cout<<"---\n";
	}	
	std::cout<<name<<"\n";
	int tempd=0,tempu=0;
	for(int k=0;k<3;k++){
		if(no[k]==1)
		  tempd=tempd+binsqa[k];
	}
	std::cout<<descr[tempd]<<"下";
	for(int l=3;l<6;l++){
		if(no[l]==1)
		  tempu=tempu+binsqa[l-3];
	}
	std::cout<<descr[tempu]<<"上\n\n";

}

gua::gua(int num[],string nam){
	for(int i=0;i<6;i++)
		no[i]=num[i];
	name=nam;
}

int qian[]={1,1,1,1,1,1};
int kun[]={0,0,0,0,0,0};
int tun[]={1,0,0,0,1,0};
int meng[]={0,1,0,0,0,1};
int xu[]={1,1,1,0,1,0};
int song[]={0,1,0,1,1,1};
int shi[]={0,1,0,0,0,0};
int bi[]={0,0,0,0,1,0};
int xiaoxu[]={1,1,1,0,1,1};
int lv[]={1,1,0,1,1,1};
int tai[]={1,1,1,0,0,0};
int pi[]={0,0,0,1,1,1};
int tongren[]={1,0,1,1,1,1};
int dayou[]={1,1,1,1,0,1};
int qian1[]={0,0,1,0,0,0};
int yu[]={0,0,0,1,0,0};
int sui[]={1,0,0,1,1,0};
int gu[]={0,1,1,0,0,1};
int lin[]={1,1,0,0,0,0};
int guan[]={0,0,0,0,1,1};
int keshi[]={1,0,0,1,0,1};
int ben[]={1,0,1,0,0,1};
int bo[]={0,0,0,0,0,1};
int fu[]={1,0,0,0,0,0};
int wuwang[]={1,0,0,1,1,1};
int daxu[]={1,1,1,0,0,1};
int yi[]={1,0,0,0,0,1};
int daguo[]={0,1,1,1,1,0};
int kan[]={0,1,0,0,1,0};
int li[]={1,0,1,1,0,1};
int xian[]={0,0,1,1,1,0};
int heng[]={0,1,1,1,0,0};
int dun[]={0,0,1,1,1,1};
int dazhuang[]={1,1,1,1,0,0};
int jin[]={0,0,0,1,0,1};
int mingyi[]={1,0,1,0,0,0};
int jiaren[]={1,0,1,0,1,1};
int kui[]={1,1,0,1,0,1};
int jian[]={0,0,1,0,1,0};
int xie[]={0,1,0,1,0,0};
int sun[]={1,1,0,0,0,1};
int yi1[]={1,0,0,0,1,1};
int guai[]={1,1,1,1,1,0};
int gou[]={0,1,1,1,1,1};
int cui[]={0,0,0,1,1,0};
int sheng[]={0,1,1,0,0,0};
int kun1[]={0,1,0,1,1,0};
int jing[]={0,1,1,0,1,0};
int ge[]={1,0,1,1,1,0};
int ding[]={0,1,1,1,0,1};
int zhen[]={1,0,0,1,0,0};
int gen[]={0,0,1,0,0,1};
int jian1[]={0,0,1,0,1,1};
int guimei[]={1,1,0,1,0,0};
int feng[]={1,0,1,1,0,0};
int lv1[]={0,0,1,1,0,1};
int xun[]={0,1,1,0,1,1};
int dui[]={1,1,0,1,1,0};
int huan[]={0,1,0,0,1,1};
int jie[]={1,1,0,0,1,0};
int zhongfu[]={1,1,0,0,1,1};
int xiaoguo[]={0,0,1,1,0,0};
int jiji[]={1,0,1,0,1,0};
int weiji[]={0,1,0,1,0,1};

gua g63(qian,"乾"),g0(kun,"坤"),g17(tun,"屯"),g34(meng,"蒙"),g23(xu,"需"),g58(song,"讼"),g2(shi,"师"),g16(bi,"比"),g55(xiaoxu,"小畜");
gua g59(lv,"履"),g7(tai,"泰"),g56(pi,"否"),g61(tongren,"同人"),g47(dayou,"大有"),g4(qian1,"谦"),g8(yu,"豫"),g25(sui,"随"),g38(gu,"蛊");
gua g3(lin,"临"),g48(guan,"观"),g41(keshi,"嗑噬"),g37(ben,"贲"),g32(bo,"剥"),g1(fu,"复"),g57(wuwang,"无妄"),g39(daxu,"大畜"),g33(yi,"颐");
gua g30(daguo,"大过"),g18(kan,"坎"),g45(li,"离"),g28(xian,"咸"),g14(heng,"恒"),g60(dun,"遯"),g15(dazhuang,"大壮"),g40(jin,"晋"),g5(mingyi,"明夷");
gua g53(jiaren,"家人"),g43(kui,"睽"),g20(jian,"蹇"),g10(xie,"解"),g35(sun,"损"),g49(yi1,"益"),g31(guai,"夬"),g62(gou,"姤"),g24(cui,"萃");
gua g6(sheng,"升"),g26(kun1,"困"),g22(jing,"井"),g29(ge,"革"),g46(ding,"鼎"),g9(zhen,"震"),g36(gen,"艮"),g52(jian1,"渐"),g11(guimei,"归妹");
gua g13(feng,"丰"),g44(lv1,"旅"),g54(xun,"巽"),g27(dui,"兑"),g50(huan,"涣"),g19(jie,"节"),g51(zhongfu,"中孚"),g12(xiaoguo,"小过"),g21(jiji,"既济");
gua g42(weiji,"未济");

gua allgua[]={g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,g11,g12,g13,g14,g15,g16,g17,g18,g19,g20,g21,g22,g23,g24,g25,g26,g27,g28,g29,g30,g31,g32,g33,g34,g35,g36,g37,g38,g39,g40,g41,g42,g43,g44,g45,g46,g47,g48,g49,g50,g51,g52,g53,g54,g55,g56,g57,g58,g59,g60,g61,g62,g63};
