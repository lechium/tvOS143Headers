/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord {

	PXTileIdentifier _tileIdentifier;

}

@property (nonatomic,readonly) id<_PXDetailsAutoplayTile> geometryReference; 
@property (assign,nonatomic) PXTileIdentifier tileIdentifier;                             //@synthesize tileIdentifier=_tileIdentifier - In the implementation block
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1 ;
-(PXTileIdentifier)tileIdentifier;
-(void)setTileIdentifier:(PXTileIdentifier)arg1 ;
@end
