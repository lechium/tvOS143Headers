/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <OpusKit/OpusKit-Structs.h>
@class NSObject;

@interface OKDocumentsManager : NSObject {

	NSObject*<OS_dispatch_queue> _documentsAccessQueue;

}
+(id)defaultManager;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)documentsDirectoryURL;
-(void)_performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)localDocumentsDirectoryURL;
-(id)documentURLsAtDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(id)uniqueFileURLForFileName:(id)arg1 inDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 copy:(BOOL)arg3 error:(id*)arg4 ;
-(void)performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)documentURLs:(id*)arg1 ;
-(id)uniqueFileURLForFileName:(id)arg1 error:(id*)arg2 ;
-(id)importFileURL:(id)arg1 error:(id*)arg2 ;
-(id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(id)duplicateFileURL:(id)arg1 error:(id*)arg2 ;
-(id)duplicateFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(id)renameFileURL:(id)arg1 toFileName:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteFileURL:(id)arg1 error:(id*)arg2 ;
@end

