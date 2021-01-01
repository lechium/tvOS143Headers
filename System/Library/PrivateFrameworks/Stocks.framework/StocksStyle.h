/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor, UIFont;

@interface StocksStyle : NSObject {

	UIColor* _chartHighlightColor;
	UIFont* _mainFont;
	UIFont* _chartLabelFont;

}
+(id)sharedStyle;
-(id)init;
-(void)resetLocale;
-(id)lightFontOfSize:(double)arg1 ;
-(id)boldFontOfSize:(double)arg1 ;
-(id)gainColor;
-(id)lossColor;
-(id)chartHighlightColor;
-(id)fontOfSize:(double)arg1 ;
-(id)mediumFontOfSize:(double)arg1 ;
@end

