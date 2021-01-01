/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIView, _MKLineHeaderModel, MKTransitInfoLabelView;

@interface _MKDataHeaderModel : NSObject {

	UIView* _ownerView;
	_MKLineHeaderModel* _firstLine;
	_MKLineHeaderModel* _secondLine;
	_MKLineHeaderModel* _thirdLine;
	_MKLineHeaderModel* _forthLine;
	MKTransitInfoLabelView* _transitLabel;
	_MKLineHeaderModel* _secondaryNameLine;

}

@property (assign,nonatomic,__weak) UIView * ownerView;                           //@synthesize ownerView=_ownerView - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * firstLine;                      //@synthesize firstLine=_firstLine - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * secondLine;                     //@synthesize secondLine=_secondLine - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * thirdLine;                      //@synthesize thirdLine=_thirdLine - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * forthLine;                      //@synthesize forthLine=_forthLine - In the implementation block
@property (nonatomic,retain) MKTransitInfoLabelView * transitLabel;               //@synthesize transitLabel=_transitLabel - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * secondaryNameLine;              //@synthesize secondaryNameLine=_secondaryNameLine - In the implementation block
-(id)description;
-(id)init;
-(UIView *)ownerView;
-(void)setOwnerView:(UIView *)arg1 ;
-(_MKLineHeaderModel *)firstLine;
-(void)setFirstLine:(_MKLineHeaderModel *)arg1 ;
-(_MKLineHeaderModel *)secondLine;
-(void)setSecondLine:(_MKLineHeaderModel *)arg1 ;
-(_MKLineHeaderModel *)thirdLine;
-(void)setThirdLine:(_MKLineHeaderModel *)arg1 ;
-(_MKLineHeaderModel *)forthLine;
-(void)setForthLine:(_MKLineHeaderModel *)arg1 ;
-(MKTransitInfoLabelView *)transitLabel;
-(void)setTransitLabel:(MKTransitInfoLabelView *)arg1 ;
-(_MKLineHeaderModel *)secondaryNameLine;
-(void)setSecondaryNameLine:(_MKLineHeaderModel *)arg1 ;
@end

