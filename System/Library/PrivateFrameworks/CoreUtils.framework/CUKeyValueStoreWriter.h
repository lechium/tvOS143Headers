/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CUKeyValueStoreWriter : NSObject {

	cdb_make* _cdb;
	BOOL _cdbStarted;
	NSString* _finalPath;
	int _tempFD;
	char _tempPath[1024];

}
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)startAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishAndReturnError:(id*)arg1 ;
-(BOOL)addKey:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
@end

