/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, ICPlayActivityEventContainerIDs, ICPlayActivityEnqueuerProperties, NSDate, NSTimeZone, ICPlayActivityEventItemIDs, NSNumber, NSData;

@interface ICPlayActivityEvent : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _autoPlayMode;
	NSArray* _buildFeatures;
	NSString* _buildVersion;
	NSString* _containerID;
	ICPlayActivityEventContainerIDs* _containerIDs;
	unsigned long long _containerType;
	NSString* _deviceName;
	unsigned long long _displayType;
	unsigned long long _endReasonType;
	ICPlayActivityEnqueuerProperties* _enqueuerProperties;
	NSDate* _eventDate;
	NSTimeZone* _eventTimeZone;
	unsigned long long _eventType;
	NSString* _externalID;
	NSString* _featureName;
	NSString* _householdID;
	ICPlayActivityEventItemIDs* _itemIDs;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	unsigned long long _itemType;
	unsigned long long _lyricsDisplayedCharacterCount;
	NSString* _lyricsLanguage;
	unsigned long long _mediaType;
	BOOL _offline;
	long long _persistentID;
	NSString* _personalizedContainerID;
	NSNumber* _privateListeningEnabled;
	unsigned long long _reasonHintType;
	NSData* _recommendationData;
	unsigned long long _repeatPlayMode;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	BOOL _SBEnabled;
	unsigned long long _shufflePlayMode;
	NSNumber* _siriInitiated;
	unsigned long long _sourceType;
	long long _systemReleaseType;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	long long _version;

}

@property (nonatomic,readonly) long long version;                                                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long autoPlayMode;                                                       //@synthesize autoPlayMode=_autoPlayMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buildFeatures;                                                          //@synthesize buildFeatures=_buildFeatures - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                                                          //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) ICPlayActivityEventContainerIDs * containerIDs;                                   //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long containerType;                                                      //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,copy,readonly) NSString * deviceName;                                                            //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;                                                        //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) unsigned long long endReasonType;                                                      //@synthesize endReasonType=_endReasonType - In the implementation block
@property (nonatomic,copy,readonly) ICPlayActivityEnqueuerProperties * enqueuerProperties;                            //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventDate;                                                               //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                                                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * eventTimeZone;                                                       //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                                           //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * householdID;                                                           //@synthesize householdID=_householdID - In the implementation block
@property (nonatomic,copy,readonly) ICPlayActivityEventItemIDs * itemIDs;                                             //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,readonly) double itemDuration;                                                                   //@synthesize itemDuration=_itemDuration - In the implementation block
@property (nonatomic,readonly) double itemEndTime;                                                                    //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (nonatomic,readonly) double itemStartTime;                                                                  //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType;                                                           //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) unsigned long long lyricsDisplayedCharacterCount;                                      //@synthesize lyricsDisplayedCharacterCount=_lyricsDisplayedCharacterCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * lyricsLanguage;                                                        //@synthesize lyricsLanguage=_lyricsLanguage - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;                                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (getter=isOffline,nonatomic,readonly) BOOL offline;                                                         //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) long long persistentID; 
@property (getter=isPrivateListeningEnabled,nonatomic,copy,readonly) NSNumber * privateListeningEnabled;              //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long reasonHintType;                                                     //@synthesize reasonHintType=_reasonHintType - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;                                                      //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatPlayMode;                                                     //@synthesize repeatPlayMode=_repeatPlayMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;                                            //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                                               //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (setter=BEnabled,getter=isSBEnabled,nonatomic,readonly) BOOL SBEnabled;                                     //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long shufflePlayMode;                                                    //@synthesize shufflePlayMode=_shufflePlayMode - In the implementation block
@property (getter=isSiriInitiated,nonatomic,copy,readonly) NSNumber * siriInitiated;                                  //@synthesize siriInitiated=_siriInitiated - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                                         //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                                                     //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontID;                                                          //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,readonly) long long systemReleaseType;                                                           //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (nonatomic,copy,readonly) NSData * timedMetadata;                                                           //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSData * trackInfo;                                                               //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerID;                                                           //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                                                            //@synthesize externalID=_externalID - In the implementation block
@property (getter=isInternalBuild,nonatomic,readonly) BOOL internalBuild; 
@property (nonatomic,copy,readonly) NSString * personalizedContainerID;                                               //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                                                               //@synthesize storeID=_storeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(unsigned long long)eventType;
-(NSString *)deviceName;
-(unsigned long long)displayType;
-(NSString *)storeID;
-(NSString *)containerID;
-(unsigned long long)sourceType;
-(NSString *)buildVersion;
-(long long)persistentID;
-(unsigned long long)itemType;
-(NSDate *)eventDate;
-(unsigned long long)mediaType;
-(ICPlayActivityEventContainerIDs *)containerIDs;
-(BOOL)isInternalBuild;
-(NSString *)externalID;
-(long long)systemReleaseType;
-(unsigned long long)storeAccountID;
-(NSString *)storeFrontID;
-(ICPlayActivityEnqueuerProperties *)enqueuerProperties;
-(BOOL)isSBEnabled;
-(id)isPrivateListeningEnabled;
-(NSTimeZone *)eventTimeZone;
-(unsigned long long)containerType;
-(double)itemEndTime;
-(unsigned long long)endReasonType;
-(unsigned long long)lyricsDisplayedCharacterCount;
-(NSString *)lyricsLanguage;
-(NSString *)featureName;
-(double)itemDuration;
-(BOOL)isOffline;
-(NSData *)recommendationData;
-(double)itemStartTime;
-(NSData *)timedMetadata;
-(NSData *)trackInfo;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(NSString *)householdID;
-(id)isSiriInitiated;
-(NSString *)personalizedContainerID;
-(unsigned long long)reasonHintType;
-(ICPlayActivityEventItemIDs *)itemIDs;
-(Class)_mutableCopyClass;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(NSArray *)buildFeatures;
-(unsigned long long)repeatPlayMode;
-(unsigned long long)shufflePlayMode;
-(unsigned long long)autoPlayMode;
@end

