/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVCompositionTrack.h>

@class AVMutableCompositionTrackInternal, NSString, NSArray;

@interface AVMutableCompositionTrack : AVCompositionTrack {

	AVMutableCompositionTrackInternal* _mutablePriv;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) int naturalTimeScale; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (nonatomic,copy) NSArray * segments; 
+(BOOL)expectsPropertyRevisedNotifications;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)languageCode;
-(BOOL)isEnabled;
-(void)setMetadata:(id)arg1 ;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)extendedLanguageTag;
-(CGAffineTransform)preferredTransform;
-(void)scaleTimeRange:(SCD_Struct_AV7)arg1 toDuration:(SCD_Struct_AV6)arg2 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV7)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_AV6)arg3 error:(id*)arg4 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV7)arg1 ;
-(BOOL)validateTrackSegments:(id)arg1 error:(id*)arg2 ;
-(void)removeTimeRange:(SCD_Struct_AV7)arg1 ;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(long long)alternateGroupID;
-(void)setNaturalTimeScale:(int)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(long long)arg1 ;
-(void)replaceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 withFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)_notifyAssetThatDurationWillChange;
-(void)_notifyAssetThatDurationDidChangeWithSuccess:(BOOL)arg1 ;
-(void)_setTrackReaderPropertyValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)_notifySelfThatSegmentsWillChange;
-(void)_notifySelfThatSegmentsDidChangeWithSuccess:(BOOL)arg1 ;
-(void)_updateTrackAssociationToTrack:(id)arg1 type:(id)arg2 operation:(long long)arg3 ;
-(BOOL)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(SCD_Struct_AV6)arg3 error:(id*)arg4 ;
-(void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
@end

