/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(SCD_Struct_AV6)duration;
-(id)commonMetadata;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(BOOL)isReadable;
-(id)metadataForFormat:(id)arg1 ;
-(id)lyrics;
-(long long)trackCount;
-(id)trackReferences;
-(float)preferredRate;
-(long long)fragmentCount;
-(BOOL)isComposable;
-(id)availableMetadataFormats;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(BOOL)isExportable;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV6)overallDurationHint;
-(OpaqueFigFormatReaderRef)_formatReader;
-(long long)firstFragmentSequenceNumber;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
@end

