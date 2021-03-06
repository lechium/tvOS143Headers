/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isAlwaysOn;
+(id)deviceProductType;
+(BOOL)isIOS;
+(id)deviceProductVersion;
+(BOOL)isNano;
+(BOOL)VTIsHorseman;
+(BOOL)supportBargeIn;
+(void)forceReload;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(BOOL)isTorpedo;
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(double)systemUpTime;
+(BOOL)supportTTS;
+(BOOL)supportExternalPhraseSpotter;
+(BOOL)supportPremiumAssets;
+(id)deviceSoftwareVersion;
+(id)getAssetHashFromConfigPath:(id)arg1 ;
+(double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1 ;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
@end

