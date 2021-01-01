/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSIdentityProvider, VSOptional, NSXPCConnection;

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation {

	VSIdentityProvider* _identityProvider;
	long long _changeKind;
	VSOptional* _result;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;              //@synthesize identityProvider=_identityProvider - In the implementation block
@property (assign,nonatomic) long long changeKind;                               //@synthesize changeKind=_changeKind - In the implementation block
-(id)init;
-(void)dealloc;
-(VSOptional *)result;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)_serviceWithErrorHandler:(/*^block*/id)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(long long)changeKind;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setChangeKind:(long long)arg1 ;
@end

