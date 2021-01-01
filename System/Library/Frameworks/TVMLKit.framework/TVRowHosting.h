/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVRowHosting <NSObject>
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
@optional
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1;
-(BOOL)shouldBindRowsTogether;

@required
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;

@end

