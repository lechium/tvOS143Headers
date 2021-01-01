/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ISBiometricSessionDelegate;
@class SSAuthenticationContext, NSNumber, SSURLBagContext, NSString, ISOperation, NSURL, SSBiometricAuthenticationContext, NSURLResponse;

@interface ISDataProvider : NSObject <NSCopying> {

	SSAuthenticationContext* _authenticationContext;
	NSNumber* _authenticatedAccountDSID;
	SSURLBagContext* _bagContext;
	long long _contentLength;
	NSString* _contentType;
	id _output;
	ISOperation* _parentOperation;
	NSURL* _redirectURL;
	SSBiometricAuthenticationContext* _biometricAuthenticationContext;
	long long _errorHandlerResponseType;
	unsigned long long _authenticatedAccountCredentialSource;
	NSURLResponse* _response;
	id<ISBiometricSessionDelegate> _biometricSessionDelegate;

}

@property (assign) long long errorHandlerResponseType;                                             //@synthesize errorHandlerResponseType=_errorHandlerResponseType - In the implementation block
@property (retain) SSAuthenticationContext * authenticationContext;                                //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) SSURLBagContext * bagContext;                                                   //@synthesize bagContext=_bagContext - In the implementation block
@property (__weak) ISOperation * parentOperation;                                                  //@synthesize parentOperation=_parentOperation - In the implementation block
@property (retain) SSBiometricAuthenticationContext * biometricAuthenticationContext;              //@synthesize biometricAuthenticationContext=_biometricAuthenticationContext - In the implementation block
@property (assign) id<ISBiometricSessionDelegate> biometricSessionDelegate;                        //@synthesize biometricSessionDelegate=_biometricSessionDelegate - In the implementation block
@property (retain) NSURLResponse * response;                                                       //@synthesize response=_response - In the implementation block
@property (assign) long long contentLength;                                                        //@synthesize contentLength=_contentLength - In the implementation block
@property (retain) NSString * contentType;                                                         //@synthesize contentType=_contentType - In the implementation block
@property (assign) unsigned long long authenticatedAccountCredentialSource;                        //@synthesize authenticatedAccountCredentialSource=_authenticatedAccountCredentialSource - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                                            //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) id output;                                                                      //@synthesize output=_output - In the implementation block
@property (retain) NSURL * redirectURL;                                                            //@synthesize redirectURL=_redirectURL - In the implementation block
+(id)provider;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLResponse *)response;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(id)output;
-(long long)contentLength;
-(void)setup;
-(void)setOutput:(id)arg1 ;
-(void)setContentLength:(long long)arg1 ;
-(ISOperation *)parentOperation;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(BOOL)isStream;
-(void)streamCancelled;
-(long long)streamedBytes;
-(BOOL)isStreamComplete;
-(NSNumber *)authenticatedAccountDSID;
-(id)closeStream;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(long long)errorHandlerResponseType;
-(void)resetStream;
-(void)streamDidFailWithError:(id)arg1 ;
-(BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(SSURLBagContext *)bagContext;
-(void)setBagContext:(SSURLBagContext *)arg1 ;
-(void)setAuthenticatedAccountDSID:(NSNumber *)arg1 ;
-(BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
-(BOOL)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 metricsDictionary:(id)arg3 error:(id*)arg4 ;
-(void)setBiometricAuthenticationContext:(SSBiometricAuthenticationContext *)arg1 ;
-(BOOL)runSubOperation:(id)arg1 error:(id*)arg2 ;
-(void)_performActionsForButton:(id)arg1 withDialog:(id)arg2 ;
-(SSBiometricAuthenticationContext *)biometricAuthenticationContext;
-(unsigned long long)authenticatedAccountCredentialSource;
-(void)setAuthenticatedAccountCredentialSource:(unsigned long long)arg1 ;
-(void)configureFromProvider:(id)arg1 ;
-(void)migrateOutputFromSubProvider:(id)arg1 ;
-(BOOL)runAuthorizationDialog:(id)arg1 error:(id*)arg2 ;
-(BOOL)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 error:(id*)arg3 ;
-(void)setErrorHandlerResponseType:(long long)arg1 ;
-(id<ISBiometricSessionDelegate>)biometricSessionDelegate;
-(void)setBiometricSessionDelegate:(id<ISBiometricSessionDelegate>)arg1 ;
@end

