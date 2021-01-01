/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NWPath, NWPathEvaluator, NEExtensionProviderContext, NSString;

@interface NEProvider : NSObject <NSExtensionRequestHandling> {

	NWPath* _defaultPath;
	NWPathEvaluator* _defaultPathEvaluator;
	NEExtensionProviderContext* _context;
	NSString* _appName;

}

@property (retain) NWPathEvaluator * defaultPathEvaluator;              //@synthesize defaultPathEvaluator=_defaultPathEvaluator - In the implementation block
@property (retain) NWPath * defaultPath;                                //@synthesize defaultPath=_defaultPath - In the implementation block
@property (retain) NEExtensionProviderContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) NSString * appName;                                  //@synthesize appName=_appName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isRunningInProvider;
+(BOOL)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2 ;
+(void)startSystemExtensionMode;
-(id)init;
-(void)dealloc;
-(NEExtensionProviderContext *)context;
-(void)setContext:(NEExtensionProviderContext *)arg1 ;
-(NWPath *)defaultPath;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)wake;
-(void)setdefaultPathObserver:(id)arg1 ;
-(void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initAllowUnentitled:(BOOL)arg1 ;
-(void)setDefaultPath:(NWPath *)arg1 ;
-(NWPathEvaluator *)defaultPathEvaluator;
-(void)setDefaultPathEvaluator:(NWPathEvaluator *)arg1 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 URL:(id)arg8 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 ;
-(id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2 ;
-(void)displayMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

