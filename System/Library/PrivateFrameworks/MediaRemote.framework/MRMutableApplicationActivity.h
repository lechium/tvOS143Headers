/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRApplicationActivity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>

@property (nonatomic,copy) NSString * primaryApplicationDisplayID; 
@property (nonatomic,copy) NSString * secondaryApplicationDisplayID; 
@property (assign,nonatomic) int status; 
+(BOOL)supportsSecureCoding;
-(void)setStatus:(int)arg1 ;
-(void)setPrimaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setSecondaryApplicationDisplayID:(NSString *)arg1 ;
@end

