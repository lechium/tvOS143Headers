/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@class SSMutableAuthenticationContext, SSAuthenticateResponse, SSAuthenticationContext, NSString;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {

	SSMutableAuthenticationContext* _authenticationContext;
	SSAuthenticateResponse* _authenticateResponse;
	id _parentViewController;

}

@property (retain) id parentViewController;                                        //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) SSAuthenticateResponse * authenticateResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_copyErrorForAuthenticateResponse:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)run;
-(id)uniqueKey;
-(id)parentViewController;
-(SSAuthenticationContext *)authenticationContext;
-(id)initWithAuthenticationContext:(id)arg1 ;
-(id)authenticatedAccountDSID;
-(SSAuthenticateResponse *)authenticateResponse;
-(void)_handleAuthenticateResponse:(id)arg1 ;
-(void)setParentViewController:(id)arg1 ;
@end
