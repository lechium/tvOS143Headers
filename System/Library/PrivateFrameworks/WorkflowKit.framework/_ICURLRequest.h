/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFUserInterfaceHost;
@class NSString, NSUUID, NSURL, ICScheme, NSDictionary;

@interface _ICURLRequest : NSObject {

	BOOL _callbackRequest;
	BOOL _deferCompletionUntilReturn;
	BOOL _internalCallbackRequest;
	NSString* _action;
	NSString* _subAction;
	NSUUID* _uniqueID;
	NSURL* _URL;
	ICScheme* _scheme;
	NSString* _bundleIdentifier;
	id<WFUserInterfaceHost> _userInterface;
	/*^block*/id _successHandler;
	/*^block*/id _failureHandler;
	NSDictionary* _parameters;
	NSString* _successURLQueryString;
	NSString* _sourceName;
	NSURL* _generatedCallbackURL;
	long long _retries;

}

@property (nonatomic,readonly) NSUUID * uniqueID;                                                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) ICScheme * scheme;                                                        //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy,readonly) id opener; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<WFUserInterfaceHost> userInterface;                             //@synthesize userInterface=_userInterface - In the implementation block
@property (nonatomic,copy) id successHandler;                                                            //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy) id failureHandler;                                                            //@synthesize failureHandler=_failureHandler - In the implementation block
@property (nonatomic,readonly) NSString * action;                                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * subAction;                                                     //@synthesize subAction=_subAction - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                                    //@synthesize parameters=_parameters - In the implementation block
@property (assign,getter=isCallbackRequest,nonatomic) BOOL callbackRequest;                              //@synthesize callbackRequest=_callbackRequest - In the implementation block
@property (assign,nonatomic) BOOL deferCompletionUntilReturn;                                            //@synthesize deferCompletionUntilReturn=_deferCompletionUntilReturn - In the implementation block
@property (nonatomic,copy) NSString * successURLQueryString;                                             //@synthesize successURLQueryString=_successURLQueryString - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                        //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSURL * generatedCallbackURL;                                                 //@synthesize generatedCallbackURL=_generatedCallbackURL - In the implementation block
@property (assign,nonatomic) long long retries;                                                          //@synthesize retries=_retries - In the implementation block
@property (assign,getter=isInternalCallbackRequest,nonatomic) BOOL internalCallbackRequest;              //@synthesize internalCallbackRequest=_internalCallbackRequest - In the implementation block
+(id)requestWithURL:(id)arg1 ;
+(id)requestWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 bundleIdentifier:(id)arg4 successHandler:(/*^block*/id)arg5 failureHandler:(/*^block*/id)arg6 ;
+(id)requestWithURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(id)description;
-(ICScheme *)scheme;
-(NSURL *)URL;
-(NSString *)bundleIdentifier;
-(NSUUID *)uniqueID;
-(NSDictionary *)parameters;
-(NSString *)action;
-(long long)retries;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)sourceName;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setRetries:(long long)arg1 ;
-(id)failureHandler;
-(void)setFailureHandler:(id)arg1 ;
-(id<WFUserInterfaceHost>)userInterface;
-(void)setDeferCompletionUntilReturn:(BOOL)arg1 ;
-(void)setCallbackRequest:(BOOL)arg1 ;
-(void)setSuccessURLQueryString:(NSString *)arg1 ;
-(NSString *)subAction;
-(id)initWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 failureHandler:(/*^block*/id)arg5 bundleIdentifier:(id)arg6 ;
-(id)opener;
-(void)parseActions;
-(id)successHandler;
-(void)setSuccessHandler:(id)arg1 ;
-(BOOL)isCallbackRequest;
-(BOOL)deferCompletionUntilReturn;
-(NSString *)successURLQueryString;
-(NSURL *)generatedCallbackURL;
-(void)setGeneratedCallbackURL:(NSURL *)arg1 ;
-(BOOL)isInternalCallbackRequest;
-(void)setInternalCallbackRequest:(BOOL)arg1 ;
@end

