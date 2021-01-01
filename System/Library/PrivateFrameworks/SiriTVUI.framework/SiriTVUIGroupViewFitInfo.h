/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriTVUI/SiriTVUI-Structs.h>
@class NSMapTable;

@interface SiriTVUIGroupViewFitInfo : NSObject {

	NSMapTable* _viewsToFitSizes;
	CGSize _totalFitSize;

}

@property (nonatomic,copy) NSMapTable * viewsToFitSizes;              //@synthesize viewsToFitSizes=_viewsToFitSizes - In the implementation block
@property (assign,nonatomic) CGSize totalFitSize;                     //@synthesize totalFitSize=_totalFitSize - In the implementation block
-(CGSize)totalFitSize;
-(NSMapTable *)viewsToFitSizes;
-(void)setViewsToFitSizes:(NSMapTable *)arg1 ;
-(void)setTotalFitSize:(CGSize)arg1 ;
@end

