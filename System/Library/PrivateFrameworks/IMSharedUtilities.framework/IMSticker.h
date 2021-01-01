/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, NSData, NSDictionary;

@interface IMSticker : NSObject {

	NSURL* _fileURL;
	NSString* _stickerGUID;
	NSString* _stickerPackGUID;
	NSString* _accessibilityLabel;
	NSString* _moodCategory;
	NSString* _stickerName;
	NSData* _recipe;
	NSString* _ballonBundleID;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,retain) NSData * recipe;                                //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,copy) NSString * ballonBundleID;                        //@synthesize ballonBundleID=_ballonBundleID - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;                   //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerGUID;                  //@synthesize stickerGUID=_stickerGUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerPackGUID;              //@synthesize stickerPackGUID=_stickerPackGUID - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                    //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * moodCategory;                          //@synthesize moodCategory=_moodCategory - In the implementation block
@property (nonatomic,copy) NSString * stickerName;                           //@synthesize stickerName=_stickerName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSURL *)fileURL;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)accessibilityLabel;
-(NSData *)recipe;
-(NSString *)stickerGUID;
-(NSString *)stickerPackGUID;
-(id)initWithStickerID:(id)arg1 stickerPackID:(id)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6 ;
-(id)initWithStickerPropertyDictionary:(id)arg1 stickerPackID:(id)arg2 stickerPackBundlePath:(id)arg3 ;
-(NSString *)moodCategory;
-(void)setMoodCategory:(NSString *)arg1 ;
-(NSString *)stickerName;
-(void)setStickerName:(NSString *)arg1 ;
-(void)setRecipe:(NSData *)arg1 ;
-(NSString *)ballonBundleID;
-(void)setBallonBundleID:(NSString *)arg1 ;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
@end

