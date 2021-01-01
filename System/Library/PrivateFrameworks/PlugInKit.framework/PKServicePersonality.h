/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PlugInKit/PKPlugInCore.h>
#import <libobjc.A.dylib/PKCorePlugInProtocol.h>
#import <libobjc.A.dylib/PKSubsystemServicePersonality.h>

@class NSDictionary, NSString, NSURL, NSUUID, NSXPCConnection, NSUserDefaults;

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality> {

	id _plugInPrincipal;
	id _hostPrincipal;
	id _embeddedPrincipal;
	NSXPCConnection* _connection;
	NSUserDefaults* _preferences;

}

@property (retain) id plugInPrincipal;                                 //@synthesize plugInPrincipal=_plugInPrincipal - In the implementation block
@property (retain) id hostPrincipal;                                   //@synthesize hostPrincipal=_hostPrincipal - In the implementation block
@property (retain) id embeddedPrincipal;                               //@synthesize embeddedPrincipal=_embeddedPrincipal - In the implementation block
@property (retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (retain) NSUserDefaults * preferences;                       //@synthesize preferences=_preferences - In the implementation block
@property (copy) NSDictionary * _userInfo; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSUserDefaults *)preferences;
-(void)setPreferences:(NSUserDefaults *)arg1 ;
-(id)plugInPrincipal;
-(void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)prepareUsing:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)beginUsingPlugIn:(id)arg1 ready:(/*^block*/id)arg2 ;
-(void)hostHasControl;
-(void)shutdownPlugIn;
-(void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(/*^block*/id)arg4 ;
-(void)setPlugInPrincipal:(id)arg1 ;
-(void)setEmbeddedPrincipal:(id)arg1 ;
-(id)embeddedPrincipal;
-(id)setupWithIdentifier:(id)arg1 extensionPointPlatform:(unsigned)arg2 ;
-(id)defaultPrincipalObject;
-(id)findProtocol:(id)arg1 ;
-(void)setHostPrincipal:(id)arg1 ;
-(double)cleanExitTimeout;
-(id)hostPrincipal;
@end

