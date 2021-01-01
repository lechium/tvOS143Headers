/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXAutoplayTile.h>

@class PXImageRequester, UIView, _PXAssetLoopUIView, PXVideoSession, PXVideoSessionUIView, NSString;

@interface PXAssetLoopUIViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile> {

	unsigned long long _requestCount;
	_PXAssetLoopUIView* _view;
	PXVideoSession* _videoSession;
	PXVideoSessionUIView* _videoView;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	long long _desiredPlayState;
	CGSize _contentSize;
	CGRect _desiredContentsRect;
	SCD_Struct_PX9 _bestPlaybackTimeRange;

}

@property (nonatomic,retain) PXVideoSession * videoSession;                     //@synthesize videoSession=_videoSession - In the implementation block
@property (assign,nonatomic) CGRect desiredContentsRect;                        //@synthesize desiredContentsRect=_desiredContentsRect - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                //@synthesize contentSize=_contentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXImageRequester * imageRequester;                 //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) long long desiredPlayState;                        //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX9 bestPlaybackTimeRange;              //@synthesize bestPlaybackTimeRange=_bestPlaybackTimeRange - In the implementation block
-(id)init;
-(void)dealloc;
-(void)prepareForReuse;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)contentSize;
-(UIView *)view;
-(void)setContentSize:(CGSize)arg1 ;
-(void)becomeReusable;
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1 ;
-(SCD_Struct_PX9)bestPlaybackTimeRange;
-(void)setBestPlaybackTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateLayer;
-(void)_updateImageRequester;
-(void)_updateVideoSession;
-(void)_reloadVideoSessionIfNecessary;
-(void)_updateDesiredDynamicRange;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(PXVideoSession *)videoSession;
-(CGRect)desiredContentsRect;
-(void)setDesiredContentsRect:(CGRect)arg1 ;
@end

