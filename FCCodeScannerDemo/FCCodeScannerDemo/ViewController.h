//
//  ViewController.h
//  FCCodeScannerDemo
//
//  Created by Frank on 10/13/15.
//  Copyright © 2015 Frank. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FCQRCodeGenerator.h"
#import "FCQRCodeScanner.h"

@interface ViewController : UIViewController <FCQRCodeScannerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>


@end

