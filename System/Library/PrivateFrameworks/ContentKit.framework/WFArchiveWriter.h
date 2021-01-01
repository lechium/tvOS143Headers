/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@interface WFArchiveWriter : NSObject {

	archiveRef _archive;

}

@property (nonatomic,readonly) archiveRef archive;              //@synthesize archive=_archive - In the implementation block
-(void)dealloc;
-(BOOL)finishWithError:(id*)arg1 ;
-(archiveRef)archive;
-(id)initWithDestinationURL:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeArchiveEntry:(id)arg1 error:(id*)arg2 ;
@end

