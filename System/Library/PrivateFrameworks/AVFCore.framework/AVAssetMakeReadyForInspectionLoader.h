/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector, NSMutableArray, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;
	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	long long _status;
	int _basicInspectionFailureCode;
	NSURL* _URL;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)URL;
-(long long)_status;
-(SCD_Struct_AV6)duration;
-(BOOL)hasProtectedContent;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoading;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(BOOL)_isStreaming;
-(id)lyrics;
-(long long)fragmentCount;
-(BOOL)isComposable;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)figChapterGroupInfo;
-(long long)firstFragmentSequenceNumber;
-(id)assetInspector;
-(void)_setStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(BOOL)_inspectionRequiresAFormatReader;
-(BOOL)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2 ;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(BOOL)_providesAccurateTiming;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
@end

