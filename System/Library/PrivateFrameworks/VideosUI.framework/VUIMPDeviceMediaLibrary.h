/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIMPMediaLibrary, NSMutableDictionary;

@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary {

	BOOL _updatingRentalPlaybackStartDates;
	VUIMPMediaLibrary* _mediaLibrary;
	NSMutableDictionary* _rentalPlaybackStartDatesToSave;

}

@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;                                  //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rentalPlaybackStartDatesToSave;              //@synthesize rentalPlaybackStartDatesToSave=_rentalPlaybackStartDatesToSave - In the implementation block
@property (assign,nonatomic) BOOL updatingRentalPlaybackStartDates;                             //@synthesize updatingRentalPlaybackStartDates=_updatingRentalPlaybackStartDates - In the implementation block
+(BOOL)_isUpdateInProgress;
+(BOOL)_isInitialUpdateInProgress;
-(void)dealloc;
-(id)initWithManager:(id)arg1 ;
-(id)title;
-(BOOL)isUpdating;
-(VUIMPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(BOOL)isInitialUpdateInProgress;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg1 ;
-(void)_storeMediaItemRentalExpirationUpdated:(id)arg1 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)updatingRentalPlaybackStartDates;
-(void)setUpdatingRentalPlaybackStartDates:(BOOL)arg1 ;
-(NSMutableDictionary *)rentalPlaybackStartDatesToSave;
-(void)_updateRentalPlaybackStartDateForAdamID:(id)arg1 playbackStartDate:(id)arg2 ;
-(void)updateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateFromCloudWithReason:(long long)arg1 ;
-(void)setRentalPlaybackStartDatesToSave:(NSMutableDictionary *)arg1 ;
@end

