/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DiagnosticExtensions/DiagnosticExtensions-Structs.h>
@class NSURL;

@interface DEArchive : NSObject {

	archiveRef _archive;
	BOOL _hasClosedArchive;
	NSURL* _tarGzUrl;
	NSURL* _sourceDir;

}

@property (retain) NSURL * tarGzUrl;               //@synthesize tarGzUrl=_tarGzUrl - In the implementation block
@property (retain) NSURL * sourceDir;              //@synthesize sourceDir=_sourceDir - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)closeArchive;
-(archiveRef)archiverForUrl:(id)arg1 ;
-(BOOL)addFile:(id)arg1 withPathName:(id)arg2 ;
-(NSURL *)tarGzUrl;
-(void)setTarGzUrl:(NSURL *)arg1 ;
-(NSURL *)sourceDir;
-(void)setSourceDir:(NSURL *)arg1 ;
@end

