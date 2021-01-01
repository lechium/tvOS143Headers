/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CFNetwork/CFNetwork-Structs.h>
@class NSHTTPCookieStorageInternal, NSArray;

@interface NSHTTPCookieStorage : NSObject {

	NSHTTPCookieStorageInternal* _internal;
	BOOL __overrideSessionCookieAcceptPolicy;

}

@property (assign,nonatomic) BOOL _overrideSessionCookieAcceptPolicy;              //@synthesize _overrideSessionCookieAcceptPolicy=__overrideSessionCookieAcceptPolicy - In the implementation block
@property (copy,readonly) NSArray * cookies; 
@property (assign) unsigned long long cookieAcceptPolicy; 
+(id)sharedHTTPCookieStorage;
+(void)_setSharedHTTPCookieStorage:(id)arg1 ;
+(id)sharedCookieStorageForGroupContainerIdentifier:(id)arg1 ;
+(id)_csff:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(id)_initWithCFHTTPCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_cookieStorage;
-(void)setCookie:(id)arg1 ;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4 ;
-(void)_testingOfStoringOfCookie:(id)arg1 ;
-(void)storeCookies:(id)arg1 forTask:(id)arg2 ;
-(void)_saveCookies:(/*^block*/id)arg1 ;
-(void)_saveCookies;
-(NSArray *)cookies;
-(id)cookiesForURL:(id)arg1 ;
-(void)getCookiesForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_getCookiesForPartition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCookie:(id)arg1 ;
-(void)removeCookiesSinceDate:(id)arg1 ;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(unsigned long long)cookieAcceptPolicy;
-(void)_setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(BOOL)_overrideSessionCookieAcceptPolicy;
-(void)_setSubscribedDomainsForCookieChanges:(id)arg1 ;
-(void)_setCookiesChangedHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)_setCookiesRemovedHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(id)sortedCookiesUsingDescriptors:(id)arg1 ;
-(void)_getCookieStoragePartitionsCompletionHandler:(/*^block*/id)arg1 ;
-(id)_getCookiesForDomain:(id)arg1 ;
-(void)set_overrideSessionCookieAcceptPolicy:(BOOL)arg1 ;
@end
