/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IMCache.h>

@class NSString;

@interface IMBaseDiskCache : NSObject <IMCache> {

	NSString* _basePath;

}

@property (nonatomic,retain) NSString * basePath;                   //@synthesize basePath=_basePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initialize;
-(id)init;
-(BOOL)isEmpty;
-(void)clearCache;
-(id)initWithBasePath:(id)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(NSString *)basePath;
-(id)pathForKey:(id)arg1 ;
-(id)_allFiles;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(void)removeItemForKey:(id)arg1 ;
-(BOOL)hasItemForKey:(id)arg1 ;
@end

