/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFChecksum : NSObject <NSCopying> {

	PFChecksumBytes _bytes;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)string;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithBytes:(PFChecksumBytes)arg1 ;
-(id)initWithChecksumAsData:(id)arg1 ;
-(PFChecksumBytes)checksumBytes;
-(BOOL)isEqualToBytes:(PFChecksumBytes)arg1 ;
@end
