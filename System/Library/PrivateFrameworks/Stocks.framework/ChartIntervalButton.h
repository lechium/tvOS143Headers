/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UILabel.h>

@interface ChartIntervalButton : UILabel {

	BOOL _selected;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(id)titleForInterval:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
@end

