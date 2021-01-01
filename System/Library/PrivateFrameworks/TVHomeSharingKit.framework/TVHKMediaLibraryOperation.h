/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class TVHKMediaLibrary, NSError, TVHKAsynchronousWorkToken;

@interface TVHKMediaLibraryOperation : TVHKAsynchronousOperation {

	TVHKMediaLibrary* _mediaLibrary;
	NSError* _error;
	TVHKAsynchronousWorkToken* _asyncWorkToken;

}

@property (nonatomic,retain) TVHKMediaLibrary * mediaLibrary;                         //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVHKAsynchronousWorkToken * asyncWorkToken;              //@synthesize asyncWorkToken=_asyncWorkToken - In the implementation block
+(id)new;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(TVHKMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(TVHKMediaLibrary *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)setAsyncWorkToken:(TVHKAsynchronousWorkToken *)arg1 ;
-(TVHKAsynchronousWorkToken *)asyncWorkToken;
@end

