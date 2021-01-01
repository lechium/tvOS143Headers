/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRColorComponents, NSString, NSURL, NSArray, _MRNowPlayingClientProtobuf, NSData;

@interface MRClient : NSObject <NSCopying> {

	int _processIdentifier;
	int _processUserIdentifier;
	long long _visibility;
	MRColorComponents* _tintColor;
	NSString* _bundleIdentifier;
	NSString* _parentApplicationBundleIdentifier;
	NSString* _displayName;
	NSURL* _appIcon;
	NSArray* _extendedBundleIdentifierHierarchy;

}

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * protobuf; 
@property (assign,nonatomic) int processIdentifier;                                                            //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (assign,nonatomic) int processUserIdentifier;                                                        //@synthesize processUserIdentifier=_processUserIdentifier - In the implementation block
@property (assign,nonatomic) long long visibility;                                                             //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,copy) MRColorComponents * tintColor;                                                      //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * parentApplicationBundleIdentifier;                                       //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSArray * extendedBundleIdentifierHierarchy;                                        //@synthesize extendedBundleIdentifierHierarchy=_extendedBundleIdentifierHierarchy - In the implementation block
@property (nonatomic,copy) NSURL * appIcon;                                                                    //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceholder; 
@property (nonatomic,readonly) BOOL hasAuxiliaryProperties; 
@property (getter=isSystemMediaApplication,nonatomic,readonly) BOOL systemMediaApplication; 
@property (getter=isSystemPodcastsApplication,nonatomic,readonly) BOOL systemPodcastsApplication; 
@property (nonatomic,readonly) MRClient * skeleton; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSArray * bundleIdentifierHierarchy; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
+(id)anyClient;
+(id)localClient;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(void)setVisibility:(long long)arg1 ;
-(long long)visibility;
-(NSString *)displayName;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isLocal;
-(void)mergeFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(_MRNowPlayingClientProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(MRClient *)skeleton;
-(NSString *)parentApplicationBundleIdentifier;
-(NSArray *)extendedBundleIdentifierHierarchy;
-(void)setExtendedBundleIdentifierHierarchy:(NSArray *)arg1 ;
-(void)setParentApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setTintColor:(MRColorComponents *)arg1 ;
-(BOOL)hasPlaceholder;
-(BOOL)isSystemMediaApplication;
-(id)initWithProcessIdentifier:(int)arg1 bundleIdentifier:(id)arg2 ;
-(void)setProcessUserIdentifier:(int)arg1 ;
-(int)processUserIdentifier;
-(MRColorComponents *)tintColor;
-(void)resolvePlaceholdersForDeviceInfo:(id)arg1 ;
-(NSURL *)appIcon;
-(NSArray *)bundleIdentifierHierarchy;
-(void)setAppIcon:(NSURL *)arg1 ;
-(BOOL)hasAuxiliaryProperties;
-(BOOL)isSystemPodcastsApplication;
@end

