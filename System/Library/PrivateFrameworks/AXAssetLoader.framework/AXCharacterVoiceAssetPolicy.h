/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXAssetLoader/AXAssetPolicy.h>

@class NSString;

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy {

	NSString* _language;

}

@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
+(id)characterVoiceAssetPolicyWithLanguage:(id)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)assetType;
-(id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(BOOL)arg2 ;
-(BOOL)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2 ;
-(id)assetsToPurgeFromInstalledAssets:(id)arg1 ;
@end
