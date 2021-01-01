/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSStoreRequest, VSOptional, SSRequest;

@interface VSStoreRequestOperation : VSAsyncOperation {

	int _requestCompletionFlag;
	VSStoreRequest* _request;
	VSOptional* _result;
	SSRequest* _storeServicesRequest;

}

@property (nonatomic,retain) VSOptional * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SSRequest * storeServicesRequest;              //@synthesize storeServicesRequest=_storeServicesRequest - In the implementation block
@property (nonatomic,copy) VSStoreRequest * request;                        //@synthesize request=_request - In the implementation block
-(id)init;
-(VSStoreRequest *)request;
-(void)cancel;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setRequest:(VSStoreRequest *)arg1 ;
-(void)executionDidBegin;
-(BOOL)_isFirstToFinish;
-(void)setStoreServicesRequest:(SSRequest *)arg1 ;
-(SSRequest *)storeServicesRequest;
@end

