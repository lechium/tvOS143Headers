/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface TXRDeferredElementInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	NSMutableArray* _faces;

}

@property (nonatomic,readonly) NSMutableArray * faces;              //@synthesize faces=_faces - In the implementation block
-(NSMutableArray *)faces;
-(id)initAsCubemap:(BOOL)arg1 ;
@end
