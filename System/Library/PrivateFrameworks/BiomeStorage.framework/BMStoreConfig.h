/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BMStoreConfig : NSObject {

	NSString* _datastorePath;
	unsigned long long _segmentSize;
	unsigned long long _datastoreVersion;

}

@property (nonatomic,readonly) unsigned long long datastoreVersion;              //@synthesize datastoreVersion=_datastoreVersion - In the implementation block
@property (nonatomic,readonly) NSString * datastorePath;                         //@synthesize datastorePath=_datastorePath - In the implementation block
@property (nonatomic,readonly) unsigned long long segmentSize;                   //@synthesize segmentSize=_segmentSize - In the implementation block
+(id)newPublicStreamDefaultConfiguration;
+(id)newStreamDefaultConfigurationForPublicStream:(BOOL)arg1 ;
+(id)sharedStreamConfigurationWithVersion:(unsigned long long)arg1 ;
+(id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(unsigned long long)segmentSize;
-(id)initWithStoreVersion:(unsigned long long)arg1 storeBasePath:(id)arg2 segmentSize:(unsigned long long)arg3 ;
-(id)initWithStoreBasePath:(id)arg1 segmentSize:(unsigned long long)arg2 ;
-(NSString *)datastorePath;
-(unsigned long long)datastoreVersion;
-(id)initWithStoreVersion:(unsigned long long)arg1 datastorePath:(id)arg2 maxAllowedMappedPages:(unsigned long long)arg3 segmentSize:(unsigned long long)arg4 segmentResizeFactor:(float)arg5 segmentPaddingFactor:(float)arg6 ;
@end

