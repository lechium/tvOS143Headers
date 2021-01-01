/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelFileAsset : MPModelObject

@property (nonatomic,copy) NSString * filePath; 
@property (assign,nonatomic) unsigned long long fileSize; 
@property (assign,nonatomic) long long protectionType; 
@property (assign,getter=isNonPurgeable,nonatomic) BOOL nonPurgeable; 
@property (nonatomic,copy) NSString * purchaseBundleFilePath; 
@property (assign,nonatomic) long long qualityType; 
+(id)allSupportedProperties;
+(id)__filePath_KEY;
+(id)__fileSize_KEY;
+(id)__nonPurgeable_KEY;
+(id)__protectionType_KEY;
+(id)__purchaseBundleFilePath_KEY;
+(id)__qualityType_KEY;
@end

