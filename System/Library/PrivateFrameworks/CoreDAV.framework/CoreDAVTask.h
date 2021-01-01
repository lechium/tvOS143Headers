/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVSubmittable.h>

@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser, CoreDAVTaskDelegate;
@class NSError, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSDate, CoreDAVRequestLogger, NSURL, NSMutableDictionary, NSMutableArray, NSDictionary, NSData, CoreDAVErrorItem, NSString, CoreDAVItem, NSRunLoop;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable> {

	id<CoreDAVTaskManager> _taskManager;
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;
	long long _numDownloadedElements;
	int _depth;
	NSHTTPURLResponse* _response;
	NSURLConnection* _connection;
	NSURLRequest* _request;
	double _timeoutInterval;
	long long _responseStatusCode;
	NSDate* _dateConnectionWentOut;
	BOOL _didSendRequest;
	BOOL _didFailWithError;
	BOOL _didCancel;
	BOOL _didReceiveResponse;
	BOOL _didReceiveData;
	BOOL _didFinishLoading;
	BOOL _finished;
	id _context;
	BOOL _receivedBadPasswordResponse;
	BOOL _triedRenewingCredential;
	BOOL _justTriedTokenAuth;
	BOOL _everTriedTokenAuth;
	BOOL _shouldRetryWithClientToken;
	BOOL _didRetryWithClientToken;
	BOOL _requestIsCompressed;
	BOOL _compressedRequestFailed;
	NSError* _passwordNotificationError;
	id<CoreDAVResponseBodyParser> _responseBodyParser;
	CoreDAVRequestLogger* _logger;
	NSURL* _url;
	BOOL _allowAutomaticRedirects;
	id<CoreDAVTaskDelegate> _delegate;
	/*^block*/id _requestProgressBlock;
	/*^block*/id _responseProgressBlock;
	/*^block*/id _completionBlock;
	NSError* _error;
	unsigned long long _totalBytesReceived;
	NSMutableDictionary* _overriddenHeaders;
	NSMutableArray* _redirectHistory;
	NSDictionary* _requestProperties;
	NSData* _fakeResponseData;
	BOOL _haveParsedFakeResponseData;
	CoreDAVErrorItem* _forbiddenErrorItem;
	NSString* _uniqueID;
	BOOL _ignoresGuardianRestrictions;
	BOOL _simulated;
	BOOL _totalBytesWasProcessedAsAbnormallyLarge;
	NSMutableDictionary* _simulatedResponseHeaders;
	long long _simulatedStatusCode;
	CoreDAVItem* _simulatedRootElement;

}

@property (assign,nonatomic) long long responseStatusCode;                                           //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytesReceived;                                  //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
@property (nonatomic,retain) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (assign) BOOL totalBytesWasProcessedAsAbnormallyLarge;                                     //@synthesize totalBytesWasProcessedAsAbnormallyLarge=_totalBytesWasProcessedAsAbnormallyLarge - In the implementation block
@property (nonatomic,copy) id requestProgressBlock;                                                  //@synthesize requestProgressBlock=_requestProgressBlock - In the implementation block
@property (nonatomic,copy) id responseProgressBlock;                                                 //@synthesize responseProgressBlock=_responseProgressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) NSRunLoop * workRunLoop; 
@property (assign,nonatomic,__weak) id<CoreDAVTaskManager> taskManager;                              //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVAccountInfoProvider> accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) int depth;                                                              //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                                 //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) BOOL allowAutomaticRedirects;                                           //@synthesize allowAutomaticRedirects=_allowAutomaticRedirects - In the implementation block
@property (nonatomic,retain) id<CoreDAVResponseBodyParser> responseBodyParser;                       //@synthesize responseBodyParser=_responseBodyParser - In the implementation block
@property (nonatomic,readonly) CoreDAVItem * rootElement; 
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
@property (assign,nonatomic) BOOL ignoresGuardianRestrictions;                                       //@synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * requestProperties;                                       //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign,nonatomic) BOOL simulated;                                                         //@synthesize simulated=_simulated - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * simulatedResponseHeaders;                         //@synthesize simulatedResponseHeaders=_simulatedResponseHeaders - In the implementation block
@property (assign,nonatomic) long long simulatedStatusCode;                                          //@synthesize simulatedStatusCode=_simulatedStatusCode - In the implementation block
@property (nonatomic,retain) CoreDAVItem * simulatedRootElement;                                     //@synthesize simulatedRootElement=_simulatedRootElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)uniqueQueryID;
+(id)stringFromDepth:(int)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(id)redactedDescription;
-(id)initWithURL:(id)arg1 ;
-(id<CoreDAVTaskDelegate>)delegate;
-(void)setDelegate:(id<CoreDAVTaskDelegate>)arg1 ;
-(NSError *)error;
-(void)setCompletionBlock:(id)arg1 ;
-(long long)responseStatusCode;
-(NSDictionary *)responseHeaders;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)url;
-(unsigned long long)cachePolicy;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(int)depth;
-(BOOL)isFinished;
-(id)completionBlock;
-(void)reset;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setDepth:(int)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(BOOL)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(BOOL)arg1 ;
-(void)setRequestProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)requestProperties;
-(unsigned long long)totalBytesReceived;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setResponseStatusCode:(long long)arg1 ;
-(id)requestBody;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(id)httpMethod;
-(void)setAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(id<CoreDAVResponseBodyParser>)responseBodyParser;
-(CoreDAVItem *)rootElement;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)submitWithTaskManager:(id)arg1 ;
-(void)finishEarlyWithError:(id)arg1 ;
-(void)setTaskManager:(id<CoreDAVTaskManager>)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
-(void)setAllowAutomaticRedirects:(BOOL)arg1 ;
-(id)lastRedirectURL;
-(id)requestBodyStream;
-(NSRunLoop *)workRunLoop;
-(void)performCoreDAVTask;
-(id)_connectionForLogging;
-(id)_requestForLogging;
-(void)tearDownResources;
-(void)setResponseBodyParser:(id<CoreDAVResponseBodyParser>)arg1 ;
-(void)_logSantizedRequest:(id)arg1 withTaskID:(id)arg2 ;
-(id)_compressBodyData:(id)arg1 ;
-(void)_failImmediately;
-(id)_createBodyData;
-(BOOL)_includeGeneralHeaders;
-(id)_applyAuthenticationChain:(CFArrayRef)arg1 toRequest:(id)arg2 ;
-(id)_applyStorageSession:(CFURLStorageSessionRef)arg1 toRequest:(id)arg2 ;
-(BOOL)markAsFinished;
-(void)reportStatusWithError:(id)arg1 ;
-(void)_sendTimeSpentInNetworkingToProvider;
-(void)handleWebLoginRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)requestProgressBlock;
-(id)responseProgressBlock;
-(BOOL)shouldLogResponseBody;
-(BOOL)_shouldHandleStatusCode:(long long)arg1 ;
-(BOOL)totalBytesWasProcessedAsAbnormallyLarge;
-(void)setTotalBytesWasProcessedAsAbnormallyLarge:(BOOL)arg1 ;
-(BOOL)allowAutomaticRedirects;
-(BOOL)_shouldCreateCredentialForBasicOrDigestAuthChallenge:(id)arg1 ;
-(id)credentialForOAuthChallenge:(id)arg1 ;
-(id)credentialForClientCertificateChallenge:(id)arg1 ;
-(BOOL)_handleUnauthorizedAccessError:(id)arg1 ;
-(void)_handleBadPasswordResponse;
-(long long)numDownloadedElements;
-(CoreDAVItem *)simulatedRootElement;
-(void)overrideRequestHeader:(id)arg1 withValue:(id)arg2 ;
-(void)startModal;
-(void)setRequestProgressBlock:(id)arg1 ;
-(void)setResponseProgressBlock:(id)arg1 ;
-(BOOL)simulated;
-(void)setSimulated:(BOOL)arg1 ;
-(NSMutableDictionary *)simulatedResponseHeaders;
-(void)setSimulatedResponseHeaders:(NSMutableDictionary *)arg1 ;
-(long long)simulatedStatusCode;
-(void)setSimulatedStatusCode:(long long)arg1 ;
-(void)setSimulatedRootElement:(CoreDAVItem *)arg1 ;
@end

