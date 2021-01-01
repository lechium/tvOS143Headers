/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSSet, NSArray;


@protocol TBNetwork <NSObject,TBScorable>
@property (nonatomic,readonly) NSString * remoteIdentifier; 
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) unsigned long long authMask; 
@property (nonatomic,readonly) NSString * authDescription; 
@property (nonatomic,readonly) NSString * attributesDescription; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) NSArray * ownerIdentifiers; 
@property (getter=isCaptive,nonatomic,readonly) BOOL captive; 
@property (getter=isMoving,nonatomic,readonly) BOOL moving; 
@property (getter=isSuspicious,nonatomic,readonly) BOOL suspicious; 
@property (getter=isPublic,nonatomic,readonly) BOOL public; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (nonatomic,readonly) unsigned long long tileKey; 
@property (nonatomic,readonly) unsigned long long accessPointCount; 
@property (nonatomic,readonly) double centroidLat; 
@property (nonatomic,readonly) double centroidLng; 
@optional
-(unsigned long long)tileKey;
-(unsigned long long)accessPointCount;
-(double)centroidLat;
-(double)centroidLng;

@required
-(unsigned long long)type;
-(id)dictionaryRepresentation;
-(BOOL)isMoving;
-(NSSet *)accessPoints;
-(NSArray *)ownerIdentifiers;
-(unsigned long long)venueGroup;
-(unsigned)venueType;
-(NSString *)SSID;
-(NSString *)remoteIdentifier;
-(BOOL)isCaptive;
-(BOOL)isPublic;
-(unsigned long long)authMask;
-(BOOL)isSuspicious;
-(NSString *)authDescription;
-(NSString *)attributesDescription;

@end

