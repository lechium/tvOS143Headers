/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEVPNConnection, NEConfiguration, NSArray, NSString, NEVPNProtocol;

@interface NEVPNManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	BOOL _notificationSent;
	NEVPNConnection* _connection;
	NEConfiguration* _configuration;

}

@property (copy) NEConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                      //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (assign) BOOL notificationSent;                               //@synthesize notificationSent=_notificationSent - In the implementation block
@property (copy) NSArray * onDemandRules; 
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled; 
@property (copy) NSString * localizedDescription; 
@property (retain) NEVPNProtocol * protocol; 
@property (retain) NEVPNProtocol * protocolConfiguration; 
@property (readonly) NEVPNConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (getter=isEnabled) BOOL enabled; 
+(id)sharedManager;
+(id)loadedManagers;
+(id)mapError:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(NEVPNProtocol *)protocol;
-(NEConfiguration *)configuration;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)isEnabled;
-(NEVPNConnection *)connection;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSArray *)onDemandRules;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithGrade:(long long)arg1 connection:(id)arg2 tunnelType:(long long)arg3 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(BOOL)isOnDemandEnabled;
-(BOOL)hasLoaded;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProtocolConfiguration:(NEVPNProtocol *)arg1 ;
-(NEVPNProtocol *)protocolConfiguration;
-(void)setNotificationSent:(BOOL)arg1 ;
-(BOOL)notificationSent;
@end
