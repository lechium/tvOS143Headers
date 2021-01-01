/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICDelegationPlayInfoRequest, ICStoreRequestContext;

@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation {

	ICDelegationPlayInfoRequestOperation* _strongSelf;
	ICDelegationPlayInfoRequest* _playInfoRequest;
	ICStoreRequestContext* _storeRequestContext;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICDelegationPlayInfoRequest * playInfoRequest;              //@synthesize playInfoRequest=_playInfoRequest - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * storeRequestContext;              //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                         //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)responseHandler;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)_finishWithResult:(BOOL)arg1 tokens:(id)arg2 error:(id)arg3 ;
-(void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3 ;
-(ICDelegationPlayInfoRequest *)playInfoRequest;
-(void)setPlayInfoRequest:(ICDelegationPlayInfoRequest *)arg1 ;
@end

