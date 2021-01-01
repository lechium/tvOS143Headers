/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA256 : MBDigest {

	CC_SHA256state_st _context;

}
-(id)init;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
@end

