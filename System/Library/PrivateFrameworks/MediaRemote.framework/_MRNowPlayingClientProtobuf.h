/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, _MRColorProtobuf;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _displayName;
	NSMutableArray* _extendedBundleIdentifierHierarchys;
	NSString* _iconURL;
	int _nowPlayingVisibility;
	NSString* _parentApplicationBundleIdentifier;
	int _processIdentifier;
	int _processUserIdentifier;
	_MRColorProtobuf* _tintColor;
	BOOL _isEmptyDeprecated;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasProcessIdentifier; 
@property (assign,nonatomic) int processIdentifier;                                            //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasParentApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * parentApplicationBundleIdentifier;                     //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProcessUserIdentifier; 
@property (assign,nonatomic) int processUserIdentifier;                                        //@synthesize processUserIdentifier=_processUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasNowPlayingVisibility; 
@property (assign,nonatomic) int nowPlayingVisibility;                                         //@synthesize nowPlayingVisibility=_nowPlayingVisibility - In the implementation block
@property (nonatomic,readonly) BOOL hasTintColor; 
@property (nonatomic,retain) _MRColorProtobuf * tintColor;                                     //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * extendedBundleIdentifierHierarchys;              //@synthesize extendedBundleIdentifierHierarchys=_extendedBundleIdentifierHierarchys - In the implementation block
@property (assign,nonatomic) BOOL hasIsEmptyDeprecated; 
@property (assign,nonatomic) BOOL isEmptyDeprecated;                                           //@synthesize isEmptyDeprecated=_isEmptyDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasIconURL; 
@property (nonatomic,retain) NSString * iconURL;                                               //@synthesize iconURL=_iconURL - In the implementation block
+(Class)extendedBundleIdentifierHierarchyType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)iconURL;
-(BOOL)hasBundleIdentifier;
-(BOOL)hasDisplayName;
-(void)setProcessIdentifier:(int)arg1 ;
-(NSString *)parentApplicationBundleIdentifier;
-(void)setParentApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setTintColor:(_MRColorProtobuf *)arg1 ;
-(void)addExtendedBundleIdentifierHierarchy:(id)arg1 ;
-(unsigned long long)extendedBundleIdentifierHierarchysCount;
-(void)clearExtendedBundleIdentifierHierarchys;
-(id)extendedBundleIdentifierHierarchyAtIndex:(unsigned long long)arg1 ;
-(void)setIconURL:(NSString *)arg1 ;
-(void)setHasProcessIdentifier:(BOOL)arg1 ;
-(BOOL)hasProcessIdentifier;
-(BOOL)hasParentApplicationBundleIdentifier;
-(void)setProcessUserIdentifier:(int)arg1 ;
-(void)setHasProcessUserIdentifier:(BOOL)arg1 ;
-(BOOL)hasProcessUserIdentifier;
-(int)nowPlayingVisibility;
-(void)setNowPlayingVisibility:(int)arg1 ;
-(void)setHasNowPlayingVisibility:(BOOL)arg1 ;
-(BOOL)hasNowPlayingVisibility;
-(id)nowPlayingVisibilityAsString:(int)arg1 ;
-(int)StringAsNowPlayingVisibility:(id)arg1 ;
-(BOOL)hasTintColor;
-(void)setIsEmptyDeprecated:(BOOL)arg1 ;
-(void)setHasIsEmptyDeprecated:(BOOL)arg1 ;
-(BOOL)hasIsEmptyDeprecated;
-(BOOL)hasIconURL;
-(int)processUserIdentifier;
-(_MRColorProtobuf *)tintColor;
-(NSMutableArray *)extendedBundleIdentifierHierarchys;
-(void)setExtendedBundleIdentifierHierarchys:(NSMutableArray *)arg1 ;
-(BOOL)isEmptyDeprecated;
@end
