/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedInMemoryDictionarySeed;

@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedInMemoryDictionarySeed * seed; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(Class)seedClass;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 dictionary:(id)arg3 ;
@end

