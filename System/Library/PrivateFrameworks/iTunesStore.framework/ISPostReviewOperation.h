/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class ISReview, NSNumber, NSString;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {

	BOOL _backgroundReview;
	ISReview* _review;

}

@property (getter=isBackgroundReview) BOOL backgroundReview;                                            //@synthesize backgroundReview=_backgroundReview - In the implementation block
@property (retain) ISReview * review;                                                                   //@synthesize review=_review - In the implementation block
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)run;
-(ISReview *)review;
-(void)setReview:(ISReview *)arg1 ;
-(id)_httpBody;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
@end
