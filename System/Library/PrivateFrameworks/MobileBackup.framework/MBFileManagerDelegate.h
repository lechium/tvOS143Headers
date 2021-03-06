/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFileManagerDelegate.h>

@class NSString;

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate> {

	/*^block*/id _shouldCopyItemAtPathToPath;

}

@property (nonatomic,copy) id shouldCopyItemAtPathToPath;              //@synthesize shouldCopyItemAtPathToPath=_shouldCopyItemAtPathToPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(id)shouldCopyItemAtPathToPath;
-(void)setShouldCopyItemAtPathToPath:(id)arg1 ;
@end

