/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CVNLPCaptionPerformance : NSObject {

	BOOL _computePerf;
	NSMutableDictionary* _results;

}

@property (nonatomic,readonly) BOOL computePerf;                           //@synthesize computePerf=_computePerf - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * results;              //@synthesize results=_results - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(NSMutableDictionary *)results;
-(void)run:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)computePerf;
@end

