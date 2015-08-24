//
//  Encryptor.h
//  Encryptor
//
//  Created by guohao on 27/7/15.
//  Copyright (c) 2015 guohao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Encryptor : NSObject

+ (NSData*) enCryptData:(NSData*)rawData
                    Key:(NSString*)key
                  Error:(NSError*)error;

+ (NSData*)deCryptData:(NSData*)cryptData
                   Key:(NSString*)key
                 Error:(NSError*)error;

@end
