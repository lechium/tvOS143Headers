/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVTopShelfContentExtensionDelegateFlags : NSObject <NSSecureCoding> {

	BOOL _respondsToPerformCustomActionWithURL;
	BOOL _respondsToDidShowItemWithIdentifier;
	BOOL _respondsToDidSelectActionWithURL;

}

@property (assign,nonatomic) BOOL respondsToPerformCustomActionWithURL;              //@synthesize respondsToPerformCustomActionWithURL=_respondsToPerformCustomActionWithURL - In the implementation block
@property (assign,nonatomic) BOOL respondsToDidShowItemWithIdentifier;               //@synthesize respondsToDidShowItemWithIdentifier=_respondsToDidShowItemWithIdentifier - In the implementation block
@property (assign,nonatomic) BOOL respondsToDidSelectActionWithURL;                  //@synthesize respondsToDidSelectActionWithURL=_respondsToDidSelectActionWithURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRespondsToDidSelectActionWithURL:(BOOL)arg1 ;
-(BOOL)respondsToPerformCustomActionWithURL;
-(BOOL)respondsToDidShowItemWithIdentifier;
-(BOOL)respondsToDidSelectActionWithURL;
-(void)setRespondsToPerformCustomActionWithURL:(BOOL)arg1 ;
-(void)setRespondsToDidShowItemWithIdentifier:(BOOL)arg1 ;
@end

