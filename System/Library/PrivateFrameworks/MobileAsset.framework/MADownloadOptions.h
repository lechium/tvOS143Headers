/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface MADownloadOptions : NSObject <NSSecureCoding> {

	BOOL _allowsCellularAccess;
	BOOL _canUseLocalCacheServer;
	BOOL _discretionary;
	BOOL _allowsExpensiveAccess;
	BOOL _requiresPowerPluggedIn;
	BOOL _prefersInfraWiFi;
	BOOL _liveServerCatalogOnly;
	BOOL _liveServerCatalogOnlyIsOverridden;
	long long _timeoutIntervalForResource;
	NSMutableDictionary* _additionalServerParams;
	NSString* _sessionId;

}

@property (assign,nonatomic) BOOL allowsCellularAccess;                                 //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) long long timeoutIntervalForResource;                      //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL discretionary;                                        //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL allowsExpensiveAccess;                                //@synthesize allowsExpensiveAccess=_allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                               //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) BOOL canUseLocalCacheServer;                               //@synthesize canUseLocalCacheServer=_canUseLocalCacheServer - In the implementation block
@property (assign,nonatomic) BOOL prefersInfraWiFi;                                     //@synthesize prefersInfraWiFi=_prefersInfraWiFi - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalServerParams;              //@synthesize additionalServerParams=_additionalServerParams - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnly;                                //@synthesize liveServerCatalogOnly=_liveServerCatalogOnly - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnlyIsOverridden;                    //@synthesize liveServerCatalogOnlyIsOverridden=_liveServerCatalogOnlyIsOverridden - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)timeoutIntervalForResource;
-(void)setTimeoutIntervalForResource:(long long)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(BOOL)requiresPowerPluggedIn;
-(void)setAllowsExpensiveAccess:(BOOL)arg1 ;
-(BOOL)discretionary;
-(void)setCanUseLocalCacheServer:(BOOL)arg1 ;
-(BOOL)canUseLocalCacheServer;
-(void)setAdditionalServerParams:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)additionalServerParams;
-(BOOL)allowsExpensiveAccess;
-(BOOL)prefersInfraWiFi;
-(void)setLiveServerCatalogOnly:(BOOL)arg1 ;
-(void)logOptions;
-(void)setPrefersInfraWiFi:(BOOL)arg1 ;
-(BOOL)liveServerCatalogOnly;
-(BOOL)liveServerCatalogOnlyIsOverridden;
-(void)setLiveServerCatalogOnlyIsOverridden:(BOOL)arg1 ;
@end
